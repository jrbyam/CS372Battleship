using System;
using System.Collections.Generic;
using UnityEngine;
using UnityTest;
using NSubstitute;

[IntegrationTest.SucceedWithAssertions]
public class ShipUnitTests : MonoBehaviour {

	public ShipController shipController;
	public bool legallyPlaced1 = false;
	public bool legallyPlaced2 = false;
	public bool legallyPlaced3 = false;
	public bool legalName1 = false;
	public bool legalName2 = false;
	public bool legalName3 = false;
	public bool legalName4 = false;

	public void Awake() {
		TestSunk ();
		TestPlacementLegality1 ();
		TestPlacementLegality2 ();
		TestPlacementLegality3 ();
		TestName1 ();
		TestName2 ();
		TestName3 ();
		TestName4 ();
	}
		
	private void TestSunk () {
		// Arrange
		shipController = Substitute.For <ShipController> ();
		shipController.size = 4;
		for (int i = 0; i < shipController.size; ++i) {
			GridSquare square = Substitute.For <GridSquare> ();
			square.hit = true;
			shipController.gridSquares.Add (square);
		}

		// Act
		shipController.updateSunk ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.shipController.sunk", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestPlacementLegality1 () {
		// Arrange
		GameObject ship = Substitute.For <GameObject> ();
		ship.transform.eulerAngles = Vector3.zero;
		ShipController shipController = ship.AddComponent<ShipController> ();
		shipController.size = 3;
		shipController.shipName = "Submarine";

		// Act
		shipController.placeShip (new Vector3 (-200, 1, 150)); // Place ship off grid to top left corner
		// Ship is placed correctly if all GridSquare's are legal and the anchor is on the second row, first column
		legallyPlaced1 = shipController.isPlacedLegally () && (shipController.gridSquares[0].row == 2 && shipController.gridSquares[0].column == 1);

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legallyPlaced1", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestPlacementLegality2 () {
		// Arrange
		GameObject ship = Substitute.For <GameObject> ();
		ship.transform.eulerAngles = new Vector3 (0, 90, 0);
		ShipController shipController = ship.AddComponent<ShipController> ();
		shipController.size = 5;
		shipController.shipName = "Carrier";

		// Act
		shipController.placeShip (new Vector3 (-200, 1, -210)); // Place ship off grid to bottom left corner
		// Ship is placed correctly if all GridSquare's are legal and the anchor is on the tenth row, third column
		legallyPlaced2 = shipController.isPlacedLegally () && (shipController.gridSquares[0].row == 10 && shipController.gridSquares[0].column == 3);

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legallyPlaced2", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestPlacementLegality3 () {
		// Arrange
		GameObject ship = Substitute.For <GameObject> ();
		ship.transform.eulerAngles = Vector3.zero;
		ShipController shipController = ship.AddComponent<ShipController> ();
		shipController.size = 3;
		shipController.shipName = "Cruiser";

		// Act
		shipController.placeShip (new Vector3 (-18, 1, -20)); // Place ship in middle of grid
		// Ship is placed correctly if all GridSquare's are legal and the anchor is on the fifth row, fifth column
		legallyPlaced3 = shipController.isPlacedLegally () && (shipController.gridSquares[0].row == 5 && shipController.gridSquares[0].column == 5);

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legallyPlaced3", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestName1 () {
		// Arrange
		ShipController temp = Substitute.For <ShipController> ();
		temp.size = 2;
		temp.shipName = "Destroyer";

		// Act
		legalName1 = temp.isNameLegal ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legalName1", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestName2 () {
		// Arrange
		ShipController temp = Substitute.For <ShipController> ();
		temp.size = 3;
		temp.shipName = "Submarine";

		// Act
		legalName2 = temp.isNameLegal ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legalName2", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestName3 () {
		// Arrange
		ShipController temp = Substitute.For <ShipController> ();
		temp.size = 4;
		temp.shipName = "Carrier";

		// Act
		legalName3 = temp.isNameLegal ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legalName3", false);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestName4 () {
		// Arrange
		ShipController temp = Substitute.For <ShipController> ();
		temp.size = 5;
		temp.shipName = "Carrier";

		// Act
		legalName4 = temp.isNameLegal ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legalName4", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}
}