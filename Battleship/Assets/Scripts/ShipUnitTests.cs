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
		ShipController temp = Substitute.For <ShipController> ();
		temp.size = 3;
		GridSquare square = Substitute.For <GridSquare> ();
		square.row = 1;
		square.column = 1;

		// Act
		temp.placeShip (square, true); // Place ship vertically starting at 1, 1 (valid)
		legallyPlaced1 = temp.isPlacedLegally ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legallyPlaced1", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestPlacementLegality2 () {
		// Arrange
		ShipController temp = Substitute.For <ShipController> ();
		temp.size = 3;
		GridSquare square = Substitute.For <GridSquare> ();
		square.row = 1;
		square.column = 10;

		// Act
		temp.placeShip (square, false); // Place ship horizontally starting at 1, 10 (invalid)
		legallyPlaced2 = temp.isPlacedLegally ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legallyPlaced2", false);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestPlacementLegality3 () {
		// Arrange
		ShipController temp = Substitute.For <ShipController> ();
		temp.size = 3;
		GridSquare square = Substitute.For <GridSquare> ();
		square.row = 10;
		square.column = 1;

		// Act
		temp.placeShip (square, true); // Place ship vertically starting at 10, 1 (invalid)
		legallyPlaced3 = temp.isPlacedLegally ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "ShipUnitTests.legallyPlaced3", false);
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