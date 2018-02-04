/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISOpenURLRequest : NSObject <NSCopying> {
    bool  _interruptsKeybagRefresh;
    bool  _isITunesStoreURL;
    NSString * _targetIdentifier;
    NSURL * _url;
    NSString * _urlBagKey;
}

@property (getter=isITunesStoreURL, nonatomic) bool ITunesStoreURL;
@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSString *URLBagKey;
@property (nonatomic) bool interruptsKeybagRefresh;
@property (nonatomic, copy) NSString *targetIdentifier;

+ (id)openURLRequestWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)URLBagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURLBagKey:(id)arg1;
- (bool)interruptsKeybagRefresh;
- (bool)isITunesStoreURL;
- (void)setITunesStoreURL:(bool)arg1;
- (void)setInterruptsKeybagRefresh:(bool)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLBagKey:(id)arg1;
- (id)targetIdentifier;

@end
