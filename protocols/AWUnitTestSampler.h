/* made by EzioChiu.
 */

@protocol AWUnitTestSampler

@required

- (void)getStatsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }, void*
- (void)resetStats;
- (void)setDisplayCallback:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDisplayState:(bool)arg1;
- (void)setSampleState:(bool)arg1;

@end
