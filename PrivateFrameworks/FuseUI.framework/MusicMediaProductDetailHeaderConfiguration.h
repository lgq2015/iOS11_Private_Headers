/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProductDetailHeaderConfiguration : NSObject {
    MPArtworkCatalog * _headerArtworkCatalog;
    unsigned long long  _headerStyle;
    NSString * _lockupArtworkProperty;
    bool  _shouldIncludeHeader;
    bool  _shouldUseSplitMainForContentView;
}

@property (nonatomic, retain) MPArtworkCatalog *headerArtworkCatalog;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic, copy) NSString *lockupArtworkProperty;
@property (nonatomic) bool shouldIncludeHeader;
@property (nonatomic) bool shouldUseSplitMainForContentView;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)headerArtworkCatalog;
- (unsigned long long)headerStyle;
- (bool)isEqual:(id)arg1;
- (id)lockupArtworkProperty;
- (void)setHeaderArtworkCatalog:(id)arg1;
- (void)setHeaderStyle:(unsigned long long)arg1;
- (void)setLockupArtworkProperty:(id)arg1;
- (void)setShouldIncludeHeader:(bool)arg1;
- (void)setShouldUseSplitMainForContentView:(bool)arg1;
- (bool)shouldIncludeHeader;
- (bool)shouldUseSplitMainForContentView;

@end
