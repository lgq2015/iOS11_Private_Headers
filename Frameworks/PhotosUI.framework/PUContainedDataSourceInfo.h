/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUContainedDataSourceInfo : NSObject {
    PUAssetsDataSource * _assetsDataSource;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _externalSections;
}

@property (nonatomic, retain) PUAssetsDataSource *assetsDataSource;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } externalSections;

- (void).cxx_destruct;
- (id)assetsDataSource;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })externalSections;
- (void)setAssetsDataSource:(id)arg1;
- (void)setExternalSections:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
