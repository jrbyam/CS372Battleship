using System;
using System.Collections.Generic;
using UnityEngine;
using UnityTest;
using NSubstitute;

[IntegrationTest.SucceedWithAssertions]
public class GridSquareUnitTests : MonoBehaviour {

	public bool legallyPlaced1 = false;
	public bool legallyPlaced2 = false;
	public bool legallyPlaced3 = false;

	public void Awake() {
		TestPlacementLegality1 ();
		TestPlacementLegality2 ();
		TestPlacementLegality3 ();
	}

	private void TestPlacementLegality1 () {
		// Arrange
		GridSquare temp = Substitute.For <GridSquare> ();
		temp.row = 1;
		temp.column = 1;

		// Act
		legallyPlaced1 = temp.isPlacedLegally ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "GridSquareUnitTests.legallyPlaced1", true);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestPlacementLegality2 () {
		// Arrange
		GridSquare temp = Substitute.For <GridSquare> ();
		temp.row = -1; // Illegal row
		temp.column = 1;

		// Act
		legallyPlaced2 = temp.isPlacedLegally ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "GridSquareUnitTests.legallyPlaced2", false);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}

	private void TestPlacementLegality3 () {
		// Arrange
		GridSquare temp = Substitute.For <GridSquare> ();
		temp.row = 1;
		temp.column = 11; // Illegal column

		// Act
		legallyPlaced3 = temp.isPlacedLegally ();

		// Assert
		var generalComparer = AssertionComponent.Create<GeneralComparer> (CheckMethod.Update, gameObject, "GridSquareUnitTests.legallyPlaced3", false);
		generalComparer.compareType = GeneralComparer.CompareType.AEqualsB;
	}
}