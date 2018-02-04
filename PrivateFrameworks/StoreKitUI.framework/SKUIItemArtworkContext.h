/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemArtworkContext : NSObject {
    UIColor * _backgroundColor;
    SKUIColorScheme * _colorScheme;
    SKUIProductImageDataConsumer * _generalImageConsumer;
    SKUIStyledImageDataConsumer * _iconConsumer;
    SKUIProductImageDataConsumer * _letterboxConsumer;
    SKUIStyledImageDataConsumer * _messagesIconConsumer;
    SKUIStyledImageDataConsumer * _newsstandConsumer;
    NSMutableDictionary * _placeholders;
    SKUIProductImageDataConsumer * _posterConsumer;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic, retain) SKUIProductImageDataConsumer *generalConsumer;
@property (nonatomic, retain) SKUIStyledImageDataConsumer *iconConsumer;
@property (nonatomic, retain) SKUIProductImageDataConsumer *letterboxConsumer;
@property (nonatomic, retain) SKUIStyledImageDataConsumer *messagesIconConsumer;
@property (nonatomic, retain) SKUIStyledImageDataConsumer *newsstandConsumer;
@property (nonatomic, retain) SKUIProductImageDataConsumer *posterConsumer;

+ (id)lockupContextWithSize:(long long)arg1;
+ (id)roomContext;
+ (id)wishlistContext;

- (void).cxx_destruct;
- (id)URLForItem:(id)arg1;
- (id)artworkForItem:(id)arg1;
- (id)backgroundColor;
- (id)colorScheme;
- (id)dataConsumerForItem:(id)arg1;
- (id)generalConsumer;
- (id)iconConsumer;
- (struct CGSize { double x1; double x2; })imageSizeForItem:(id)arg1;
- (struct CGSize { double x1; double x2; })largestImageSizeForItems:(id)arg1;
- (struct CGSize { double x1; double x2; })largestImageSizeForLockups:(id)arg1;
- (id)letterboxConsumer;
- (id)messagesIconConsumer;
- (id)newsstandConsumer;
- (id)placeholderImageForItem:(id)arg1;
- (id)posterConsumer;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setGeneralConsumer:(id)arg1;
- (void)setIconConsumer:(id)arg1;
- (void)setLetterboxConsumer:(id)arg1;
- (void)setMessagesIconConsumer:(id)arg1;
- (void)setNewsstandConsumer:(id)arg1;
- (void)setPosterConsumer:(id)arg1;

@end
