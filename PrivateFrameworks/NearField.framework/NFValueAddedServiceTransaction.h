/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding> {
    NSNumber * _didSucceed;
    NSError * _error;
    NSNumber * _filter;
    NSNumber * _filterType;
    NSData * _merchantId;
    NSData * _passData;
    unsigned int  _result;
    NSString * _signupUrl;
    NSNumber * _terminalAppVersion;
    NSNumber * _terminalMode;
    NSData * _token;
}

@property (nonatomic, readonly) NSNumber *didSucceed;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSNumber *filter;
@property (nonatomic, readonly) NSNumber *filterType;
@property (nonatomic, readonly) NSData *merchantId;
@property (nonatomic, readonly) NSData *passData;
@property (nonatomic, readonly) unsigned int result;
@property (nonatomic, readonly) NSString *signupUrl;
@property (nonatomic, readonly) NSNumber *terminalAppVersion;
@property (nonatomic, readonly) NSNumber *terminalMode;
@property (nonatomic, readonly) NSData *token;

+ (bool)supportsSecureCoding;

- (id)asDictionary;
- (void)dealloc;
- (id)description;
- (id)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)filter;
- (id)filterType;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)merchantId;
- (id)passData;
- (unsigned int)result;
- (id)signupUrl;
- (id)terminalAppVersion;
- (id)terminalMode;
- (id)token;

@end
