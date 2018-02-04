/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKLegacyPredicateValidator : CKPredicateValidator

- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (void)validate:(id)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;
- (bool)validateBasicOperatorPredicate:(id)arg1;
- (bool)validateBeginsWithPredicate:(id)arg1;
- (bool)validateBetweenPredicate:(id)arg1;
- (void)validateComparisonPredicate:(id)arg1;
- (void)validateCompoundPredicate:(id)arg1;
- (bool)validateContainsAllInPredicate:(id)arg1;
- (bool)validateContainsAnyPredicate:(id)arg1;
- (bool)validateContainsPredicate:(id)arg1;
- (bool)validateFullTextSearchPredicate:(id)arg1;
- (bool)validateInPredicate:(id)arg1;
- (bool)validateNearPredicate:(id)arg1;

@end
