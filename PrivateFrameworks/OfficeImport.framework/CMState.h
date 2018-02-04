/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMState : NSObject {
    long long  _textLevel;
    NSMutableDictionary * components;
    NSMutableDictionary * htmlResource;
    OADColorMap * mColorMap;
    OADColorScheme * mColorScheme;
    bool  mIsOnPhone;
    bool  mIsThumbnail;
    NSString * mResourceUrlPrefix;
    id  mResources;
    int  mSrcFormat;
}

- (void).cxx_destruct;
- (id)colorMap;
- (id)colorScheme;
- (id)componentByName:(id)arg1;
- (void)copyFromCMStateWithoutComponents:(id)arg1;
- (id)getHtmlResource;
- (id)init;
- (bool)isOffice12;
- (bool)isOnPhone;
- (bool)isThumbnail;
- (void)popTextLevel;
- (void)pushTextLevel;
- (id)resourceUrlPrefix;
- (id)resources;
- (void)setColorMap:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setComponentWithName:(id)arg1 value:(id)arg2;
- (void)setHtmlResource:(id)arg1;
- (void)setIsOnPhone:(bool)arg1;
- (void)setIsThumbnail:(bool)arg1;
- (void)setResourceUrlPrefix:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setSrcFormat:(int)arg1;
- (int)sourceFormat;
- (long long)textLevel;

@end
