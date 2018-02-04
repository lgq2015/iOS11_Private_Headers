/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGXPCResponse2 : SGXPCResponse1 {
    <NSSecureCoding> * _response2;
}

@property (nonatomic, readonly) <NSSecureCoding> *response2;

+ (id)responseWith:(id)arg1 also:(id)arg2;
+ (id)responseWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)response1;
- (id)response2;
- (void)setResponse2:(id)arg1;

@end
