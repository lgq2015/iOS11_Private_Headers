/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNTestFuture : NSObject <NSSecureCoding> {
    NSError * _error;
    <NSObject><NSSecureCoding> * _result;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) <NSObject><NSSecureCoding> *result;

+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithResult:(id)arg1;
- (id)result;

@end
