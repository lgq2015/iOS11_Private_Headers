/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLinkedMediaFile : OADMovie {
    bool  mIsExternal;
    NSURL * mUrl;
}

@property bool isExternal;
@property (retain) NSURL *url;

- (void)dealloc;
- (bool)isExternal;
- (void)setIsExternal:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
