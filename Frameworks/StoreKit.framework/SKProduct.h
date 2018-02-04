/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProduct : NSObject {
    id  _internal;
}

@property (getter=_localeIdentifier, setter=_setLocaleIdentifier:, nonatomic, copy) NSString *_localeIdentifier;
@property (nonatomic, readonly) NSArray *downloadContentLengths;
@property (nonatomic, readonly) NSString *downloadContentVersion;
@property (getter=isDownloadable, nonatomic, readonly) bool downloadable;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSLocale *priceLocale;
@property (nonatomic, readonly) NSString *productIdentifier;

- (id)_localeIdentifier;
- (void)_setContentVersion:(id)arg1;
- (void)_setDownloadContentLengths:(id)arg1;
- (void)_setDownloadable:(bool)arg1;
- (void)_setLocaleIdentifier:(id)arg1;
- (void)_setLocalizedDescription:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setProductIdentifier:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadContentLengths;
- (id)downloadContentVersion;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isDownloadable;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)price;
- (id)priceLocale;
- (id)productIdentifier;

@end
