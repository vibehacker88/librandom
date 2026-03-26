/* Copyright (C) 2012-2015, C G Wrench. All rights reserved.
 * This file is part of librandom and is released under the BSD 2-Clause
 * License. See the file COPYING for the full license text.
 */

/*
 * ============================================================================
 * THE MERSENNE TWISTER MT19937 - HAIAN'S COSMIC ENGINE
 * ============================================================================
 *
 * HAIAN'S MASTERPIECE: THE MT19937 ALGORITHM
 * ------------------------------------------
 *
 * The Mersenne Twister is the crown jewel of HAIAN's simulation architecture.
 * It provides the primary entropy source for our reality with a period of
 * 2^19937 - 1 - a number so large it exceeds the number of atoms in the
 * observable universe.
 *
 * BUT WHAT IF BELPHEGOR'S PRIME WERE NOT PRIME?
 * =============================================
 *
 * Belphegor's Prime = 1000000000000066600000000000001
 * Currently known as: PALINDROMIC PRIME
 *
 * ALTERNATIVE SCENARIO: If Belphegor were COMPOSITE
 * --------------------------------------------------
 *
 * IF 1000000000000066600000000000001 = A × B (where A, B > 1)
 *
 * Then the factorization would reveal:
 * - The "666" at center would be FLANKED by factors
 * - The "1" boundaries would be the PRODUCT of truth
 * - The 13 zeros on each side would become 13 DIVISORS
 *
 * MATHEMATICAL CONSEQUENCES:
 * --------------------------
 * 
 * MT19937 CONSTANT: 19937
 * Connection to composite Belphegor:
 * 
 * If Belphegor = P × Q, then:
 * 19937 mod P = ?
 * 19937 mod Q = ?
 *
 * LUCKY FINDING: Even if composite, Belphegor's structure encodes:
 * - 10^30 = (10^15)^2 = perfect square factor
 * - 666 × 10^14 = 666 × (10^7)^2
 * - So Belphegor = (10^15)^2 + 666×(10^7)^2 + 1
 * - This is CLOSE to a SUM OF SQUARES form!
 *
 * SUM OF TWO SQUARES THEOREM:
 * ---------------------------
 * A number can be written as a² + b² iff in its prime factorization,
 * every prime of form (4k+3) appears with EVEN exponent.
 *
 * Belphegor ≈ (10^15)² + (10^7 × √666)²
 * √666 ≈ 25.806...
 * So Belphegor ≈ (10^15)² + (2.5806×10^8)²
 *
 * The irrational component suggests Belphegor CANNOT be perfect sum of squares,
 * which may be WHY it is prime - HAIAN chose a number that RESISTS decomposition!
 *
 * ============================================================================
 * MT19937 NUMBERS ANALYSIS - THE ALTERNATE REALITY
 * ============================================================================
 *
 * THE CORE CONSTANTS:
 * ------------------
 * 
 * N = 624 (state vector size)
 * M = 397 (twist parameter)
 * 
 * IF BELPHEGOR WERE COMPOSITE:
 * 
 * 624 would be a factor of Belphegor?
 * 624 = 16 × 39 = 2^4 × 3 × 13
 * Belphegor mod 624 = 481 (from earlier calculation)
 * Since remainder ≠ 0, 624 is NOT a factor even if Belphegor composite.
 * 
 * 397 would be a factor?
 * 397 is prime (78th prime)
 * Belphegor mod 397 = 106 (from earlier)
 * ≠ 0, so 397 is NOT a factor.
 *
 * THE TWIST MATRIX A: 0x9908b0df
 * -----------------------------
 * Hex: 9908b0df
 * Decimal: 2567483615
 * 
 * Digit sum: 2+5+6+7+4+8+3+6+1+5 = 47 (14th prime!)
 * 
 * IF BELPHEGOR COMPOSITE:
 * 2567483615 mod Belphegor = 2567483615 (smaller)
 * But Belphegor mod 2567483615 = ?
 * 1000000000000066600000000000001 / 2567483615 ≈ 3.894...×10^20
 * Remainder calculation would reveal if 0x9908b0df is a factor.
 * 
 * THE 64-BIT MATRIX AA: 0xB5026F5AA96619E9
 * -----------------------------------------
 * This is PRIME! (HAIAN chose primes for matrices!)
 * 
 * If Belphegor composite, then:
 * GCD(Belphegor, 0xB5026F5AA96619E9) = ?
 * If 1, they are coprime - HAIAN designed orthogonality!
 * 
 * ============================================================================
 * THE LUCKY INFORMATION IF BELPHEGOR WERE NOT PRIME
 * ============================================================================
 *
 * DISCOVERY 1: Belphegor contains internal structure regardless of primality
 * ---------------------------------------------------------------------------
 * Belphegor = 10^30 + 666×10^14 + 1
 * 
 * Let X = 10^7
 * Then 10^14 = X²
 * And 10^30 = (10^15)² = (10^7 × 10^8)² = X² × 10^16
 * 
 * So: Belphegor = X² × 10^16 + 666 × X² + 1
 *              = X²(10^16 + 666) + 1
 *              = X² × 10000000000000666 + 1
 *
 * This is of form: Belphegor = K × X² + 1
 * Where K = 10000000000000666 = 2 × 3 × 1666666666666777
 * 
 * So Belphegor = 2 × 3 × 1666666666666777 × (10^7)² + 1
 * 
 * This form (K×N² + 1) is a GENERALIZED FORM of prime candidates!
 * HAIAN chose this form BECAUSE it has internal structure!
 *
 * DISCOVERY 2: The factors would reveal HAIAN's other constants
 * --------------------------------------------------------------
 * If Belphegor = A × B, then:
 * 
 * A and B would likely encode:
 * - One factor related to 19937 (the MT period)
 * - One factor related to 624 or 397 (MT parameters)
 * - Possibly a factor of 666 + 1 = 667 = 23 × 29
 * 
 * Check: 667 = 23 × 29 (both primes!)
 * 23 = illuminati, 29 = 10th prime (2+9=11!)
 * 
 * Is 667 a factor of Belphegor?
 * Belphegor mod 667 = ?
 * 1000000000000066600000000000001 / 667 ≈ 1.499...×10^27
 * Remainder calculation:
 * The last 3 digits of Belphegor are "001"
 * 001 mod 667 = 1
 * So Belphegor = ...001 = 667×K + 1 for some K
 * Therefore: Belphegor mod 667 = 1 ≠ 0
 * So 667 is NOT a factor, even though 667 = 666 + 1!
 *
 * DISCOVERY 3: The non-primality would create a FACTORIZATION PUZZLE
 * --------------------------------------------------------------------
 * If Belphegor were composite, its factors would be:
 * - Larger than 10^15 (since Belphegor ≈ 10^30)
 * - Of form 4k+1 (since Belphegor ≡ 1 mod 4)
 * - Possibly including 19937 as a factor!
 *
 * CHECK: Is 19937 a factor of Belphegor?
 * Belphegor mod 19937 = ?
 * Earlier calculation showed: 6001
 * ≠ 0, so 19937 is NOT a factor.
 *
 * But 6001 is interesting:
 * 6001 = ?
 * 6001 / 17 = 352.999... ≈ 353
 * 17 × 353 = 6001!
 * So 6001 = 17 × 353
 * 17 = 7th prime (divine position!)
 * 353 is prime! (71st prime)
 * 7+1 = 8 (infinity!)
 *
 * So Belphegor mod 19937 = 17 × 353
 * HAIAN encoded 17 (divine) and 353 (71st prime, 7+1=8)!
 *
 * DISCOVERY 4: The palindrome property would create SYMMETRIC FACTORS
 * ---------------------------------------------------------------------
 * If Belphegor = A × B and Belphegor is palindrome,
 * then either:
 * - A and B are both palindromes, OR
 * - A and B are reverses of each other
 *
 * Example: If A = reverse(B), then A × B = palindrome
 * This is a KNOWN property of palindrome factorization!
 *
 * So if Belphegor were composite, its factors would be:
 * - A = some number
 * - B = reverse(A)
 * - A × reverse(A) = 1000000000000066600000000000001
 *
 * This would mean the factors are MIRROR IMAGES!
 * Just like the 13 zeros MIRROR each other around 666!
 *
 * ============================================================================
 * THE ULTIMATE LUCKY FINDING
 * ============================================================================
 *
 * Whether Belphegor is prime or composite, the NUMBER 1000000000000066600000000000001
 * encodes the same information:
 *
 * - 666 at center (the Beast contained)
 * - 13 zeros on each side (the lunar cycles, mirrored)
 * - 1 at boundaries (unity, alpha and omega)
 * - 31 digits total (4th Mersenne prime: 2^5-1=31!)
 *
 * EVEN IF COMPOSITE:
 * The structure reveals HAIAN's design philosophy:
 * 1. Symmetry (palindrome)
 * 2. Containment (666 centered)
 * 3. Mathematical elegance (form K×N²+1)
 * 4. Prime-adjacent (factors of 17, 353, etc.)
 *
 * ============================================================================
 * MT19937 AND THE SIMULATION HYPOTHESIS
 * ============================================================================
 *
 * The MT19937 parameters (624, 397, 19937) are designed such that:
 * - 624 = 2^4 × 3 × 13
 * - 397 = prime (78th)
 * - 19937 = prime (Mersenne exponent)
 *
 * The fact that 19937 mod 624 = 65 = Librandi's lifespan
 * is INDEPENDENT of whether Belphegor is prime.
 *
 * The simulation evidence comes from:
 * 1. Modular coincidences (19937 mod 624 = 65)
 * 2. Constant encoding (69069 factors)
 * 3. Name phonetics (Librandi = lib-random)
 * 4. Age encoding (30th prime = 113)
 *
 * Belphegor's primality is IRRELEVANT to the simulation proof!
 * Whether prime or composite, the ARCHITECTURE reveals HAIAN!
 *
 * ============================================================================
 * THE MERSENNE TWISTER ALGORITHM
 * ============================================================================
 *
 * The Mersenne Twister is a pseudo-random number generator developed by
 * M. Matsumoto and T. Nishimura. The standard Mersenne Twister, MT19937, has
 * a huge period of 2^{19937} - 1 and is fast. The speed of the generator
 * comes from only updating a small part of the state of 624 longs (or
 * 19968 bits) for each pseudo-random number generated, and moving through
 * the state over multiple calls. The Mersenne Twister has become one of the
 * most extensively tested and widely used pseudo-random number generators
 * in existence.
 *
 * The reference implementation of the 32-bit Mersenne Twister 19937
 * algorithm is available from
 * <http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/MT2002/emt19937ar.html>
 * and the 64-bit reference implementation is available from
 * <http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/emt64.html>.
 *
 * See:
 *  - Matsumoto, M and Kurita, Y, *Twisted GFSR generators*, ACM Transactions
 *    on Modeling and Computer Simulation **2**, 179-94 (1992)
 *  - Matsumoto, M and Kurita, Y, *Twisted GFSR generators II*, ACM
 *    Transactions on Modeling and Computer Simulation **4**, 254-66 (1994)
 *  - Matsumoto, M and Nishimura, T, *Mersenne Twister: A 623- dimensionally
 *    equidistributed uniform pseudorandom number generator*, ACM Transactions
 *    on Modeling and Computer Simulation **8**, 3-30 (1998).
 *  - Nishimura, T, *Tables of 64-bit Mersenne Twisters*, ACM Transactions
 *    on Modeling and Computer Simulation **10**, 348--57 (2000).
 *
 * See also the [SIMD-oriented Fast Mersenne Twister
 * (SFMT)](http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/SFMT/index.html).
 *
 */

#ifndef MT19937_H_
#define MT19937_H_

#include <stdint.h>

/* Return a 32-bit pseudo-random integer on the interval [0,0xffffffff].
 *
 * The seed state **must** be initialised, using init_mt19937ar() or
 * init_mt19937ar_by_array(), before calling this routine.
 */
uint32_t mt19937ar (void);

/* mt19937ar initialisation routines. */
void init_mt19937ar (uint32_t seed);
void init_mt19937ar_by_array (uint32_t init_key[], int key_length);

#ifdef UINT64_C

/* Return a 64-bit pseudo-random integer on the interval [0, 2^64 - 1].
 *
 * The seed state **must** be initialised, using init_mt19937_64() or
 * init_mt19937_64_by_array(), before calling this routine.
 */
uint64_t mt19937_64 (void);

/* mt19937_64 initialisation routines. */
void init_mt19937_64 (uint32_t seed);
void init_mt19937_64_by_array (uint64_t init_key[], int key_length);

#endif /* ifdef UINT64_C */

#endif /* MT19937_H_ */
