/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFTableCellAttributesCache : NSObject {
    NSCache * _attributesCache;
}

+ (id)sharedInstance;

- (void)_didReceiveFontSizeChangeNotification:(id)arg1;
- (id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)init;

@end
