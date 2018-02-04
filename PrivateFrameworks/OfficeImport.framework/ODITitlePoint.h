/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODITitlePoint : ODIHorizonalList3 {
    NSString * mTitlePointPresentationName;
}

- (void)dealloc;
- (id)initWithTitlePointPresentationName:(id)arg1 state:(id)arg2;
- (void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2;

@end
