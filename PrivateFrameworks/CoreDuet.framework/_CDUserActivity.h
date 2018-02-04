/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDUserActivity : NSObject <NSSecureCoding> {
    NSString * _bundleId;
    NSDate * _date;
    NSDictionary * _payload;
    NSString * _title;
    NSString * _type;
}

@property (copy) NSString *bundleId;
@property (copy) NSDate *date;
@property (copy) NSDictionary *payload;
@property (copy) NSString *title;
@property (copy) NSString *type;

+ (id)createFromUserActivity:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (void)setBundleId:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)title;
- (id)type;

@end
