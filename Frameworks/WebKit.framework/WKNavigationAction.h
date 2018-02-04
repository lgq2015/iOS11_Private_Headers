/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigationAction : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationAction> { 
        struct type { 
            unsigned char __lx[384]; 
        } data; 
    }  _navigationAction;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly) bool _canHandleRequest;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _clickLocationInRootViewCoordinates;
@property (nonatomic, readonly) bool _isRedirect;
@property (nonatomic, readonly) NSURL *_originalURL;
@property (nonatomic, readonly) bool _shouldOpenAppLinks;
@property (nonatomic, readonly) bool _shouldOpenExternalSchemes;
@property (nonatomic, readonly) bool _shouldOpenExternalURLs;
@property (nonatomic, readonly) long long _syntheticClickType;
@property (getter=_isUserInitiated, nonatomic, readonly) bool _userInitiated;
@property (nonatomic, readonly) _WKUserInitiatedAction *_userInitiatedAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long navigationType;
@property (nonatomic, readonly, copy) NSURLRequest *request;
@property (nonatomic, readonly, copy) WKFrameInfo *sourceFrame;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) WKFrameInfo *targetFrame;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (bool)_canHandleRequest;
- (struct CGPoint { double x1; double x2; })_clickLocationInRootViewCoordinates;
- (bool)_isRedirect;
- (bool)_isUserInitiated;
- (id)_originalURL;
- (bool)_shouldOpenAppLinks;
- (bool)_shouldOpenExternalSchemes;
- (bool)_shouldOpenExternalURLs;
- (long long)_syntheticClickType;
- (id)_userInitiatedAction;
- (void)dealloc;
- (id)description;
- (long long)navigationType;
- (id)request;
- (id)sourceFrame;
- (id)targetFrame;

@end
