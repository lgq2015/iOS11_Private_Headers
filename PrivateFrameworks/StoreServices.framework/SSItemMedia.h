/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemMedia : NSObject {
    long long  _duration;
    long long  _fullDuration;
    long long  _mediaFileSize;
    NSString * _mediaKind;
    bool  _protected;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) long long durationInMilliseconds;
@property (nonatomic, readonly) long long fullDurationInMilliseconds;
@property (nonatomic, readonly) long long mediaFileSize;
@property (nonatomic, copy) NSString *mediaKind;
@property (getter=isProtectedMedia, nonatomic, readonly) bool protectedMedia;

- (id)URL;
- (void)dealloc;
- (id)description;
- (long long)durationInMilliseconds;
- (long long)fullDurationInMilliseconds;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStoreOfferDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProtectedMedia;
- (long long)mediaFileSize;
- (id)mediaKind;
- (void)setMediaKind:(id)arg1;

@end
