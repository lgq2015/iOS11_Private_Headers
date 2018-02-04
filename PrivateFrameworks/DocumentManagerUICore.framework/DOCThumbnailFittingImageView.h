/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailFittingImageView : DOCFittingImageView <DOCAppearanceProtocol> {
    DOCAppearance * _appearance;
    long long  _generatorGeneration;
    FPItem * _item;
    NSURL * _url;
}

@property (nonatomic, retain) DOCAppearance *appearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long generatorGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FPItem *item;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)appearance;
- (long long)generatorGeneration;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 item:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 url:(id)arg2;
- (id)item;
- (void)setAppearance:(id)arg1;
- (void)setGeneratorGeneration:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAppearance:(id)arg1;
- (void)updateThumbnail;
- (void)updateThumbnailForItem:(id)arg1;
- (void)updateThumbnailForURL:(id)arg1;
- (id)url;

@end
