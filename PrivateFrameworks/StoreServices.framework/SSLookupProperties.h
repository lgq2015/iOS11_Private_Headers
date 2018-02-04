/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {
    long long  _localizationStyle;
    CLLocation * _location;
    NSMutableDictionary * _requestParameters;
    NSNumber * _timeoutInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyProfile;
@property (nonatomic) long long localizationStyle;
@property (nonatomic, copy) CLLocation *location;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *timeoutInterval;

- (id)copyRequestParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)keyProfile;
- (long long)localizationStyle;
- (id)location;
- (void)setKeyProfile:(id)arg1;
- (void)setLocalizationStyle:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setTimeoutInterval:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)timeoutInterval;
- (id)valueForRequestParameter:(id)arg1;

@end
