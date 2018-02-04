/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBMasterLayoutMap : NSObject {
    NSMutableDictionary * mMasterIdToMasterInfoMap;
    NSMutableDictionary * mTitleIdToMasterIdMap;
}

+ (id)masterLayoutMap;

- (id)allMasterIds;
- (void)dealloc;
- (id)init;
- (int)masterIdForTitleId:(int)arg1;
- (id)masterInfoForMasterId:(int)arg1;
- (id)masterInfoForSlideHolder:(id)arg1;
- (void)setMasterId:(int)arg1 forTitleId:(int)arg2;
- (void)setMasterInfo:(id)arg1 forMasterId:(int)arg2;
- (id)slideLayoutForSlideHolder:(id)arg1;

@end