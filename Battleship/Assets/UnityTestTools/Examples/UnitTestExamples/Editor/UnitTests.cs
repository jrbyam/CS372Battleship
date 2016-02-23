using System;
using System.Collections.Generic;
using System.Threading;
using NUnit.Framework;
using NSubstitute;
using UnityEngine;

namespace UnityTest {
	[TestFixture]
	[Category ("Unit Tests")]
	internal class UnitTests {

		[Test]
		public void testIfSunk () {
			Ship ship = Substitute.For<Ship>(5);

			for (int i = 0; i < ship.size; i++) {
				GridSquare square = new GridSquare (1, i);
				square.hit = true;
				ship.gridSquares.Add (square);
			}
			if (ship.sunk) {
				Assert.Pass ();
			}
		}
	}
}
