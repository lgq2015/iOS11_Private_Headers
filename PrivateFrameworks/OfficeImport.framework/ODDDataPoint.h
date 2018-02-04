/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDDataPoint : ODDPoint {
    NSMutableArray * mPresentations;
}

- (void)addAssociatedPresentation:(id)arg1;
- (void)addPresentation:(id)arg1 order:(unsigned long long)arg2;
- (void)dealloc;
- (id)presentations;

@end
