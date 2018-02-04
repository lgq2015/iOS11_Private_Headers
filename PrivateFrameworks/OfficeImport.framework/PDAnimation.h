/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimation : NSObject {
    OITSUNoCopyDictionary * mBuildMap;
    PDRootTimeNode * mRootTimeNode;
}

+ (void)initialize;

- (id)addRootTimeNode;
- (id)buildMap;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)rootTimeNode;
- (void)setBuildMap:(id)arg1;

@end
