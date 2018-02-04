/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBMasterInfo : NSObject {
    NSDictionary * mLayoutMap;
    unsigned int  mMainPbRef;
    PDSlideMaster * mSlideMaster;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } * mSrcTextStyling;
    NSMutableArray * mTgtSlideLayoutArray;
    unsigned int  mTitlePbRef;
    bool  mUseXmlBlobs;
    NSMutableDictionary * mXmlLayoutMap;
    unsigned int  mXmlMainMasterId;
}

@property (nonatomic) bool useXmlBlobs;
@property (nonatomic) unsigned int xmlMainMasterId;

- (id)allTargetLayoutTypes;
- (void)cacheSlideLayouts;
- (void)cacheTargetLayoutType:(int)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)mainPbRef;
- (void)setMainPbRef:(unsigned int)arg1;
- (void)setSlideLayout:(id)arg1 forXmlLayoutId:(unsigned short)arg2;
- (void)setSlideMaster:(id)arg1;
- (void)setTitlePbRef:(unsigned int)arg1;
- (void)setUseXmlBlobs:(bool)arg1;
- (void)setXmlMainMasterId:(unsigned int)arg1;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (id)slideLayoutForXmlLayoutId:(unsigned short)arg1;
- (id)slideMaster;
- (struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)sourceTextStyling;
- (unsigned int)titlePbRef;
- (id)uniqueXmlSlideLayout;
- (bool)useXmlBlobs;
- (unsigned int)xmlMainMasterId;

@end
