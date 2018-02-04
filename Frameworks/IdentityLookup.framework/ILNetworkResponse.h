/* made by EzioChiu
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILNetworkResponse : NSObject <NSSecureCoding> {
    NSData * _data;
    NSHTTPURLResponse * _urlResponse;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSHTTPURLResponse *urlResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLResponse:(id)arg1 data:(id)arg2;
- (void)setData:(id)arg1;
- (void)setUrlResponse:(id)arg1;
- (id)urlResponse;

@end
