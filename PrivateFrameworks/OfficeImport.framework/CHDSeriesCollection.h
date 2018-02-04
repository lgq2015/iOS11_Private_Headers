/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDSeriesCollection : EDSortedCollection {
    CHDChart * mChart;
}

+ (id)seriesCollectionWithChart:(id)arg1;

- (unsigned long long)addObject:(id)arg1;
- (id)firstNonEmptySeries;
- (id)initWithChart:(id)arg1;
- (unsigned long long)nonEmptySeriesCount;

@end
