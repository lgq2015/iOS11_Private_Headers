/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
 */

@interface CBSUIAlert : NSObject <NSSecureCoding> {
    NSMutableArray * _actions;
    NSString * _identifier;
    bool  _isActive;
    NSString * _message;
    long long  _preferredStyle;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *actions;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isActive;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) long long preferredStyle;
@property (nonatomic, retain) NSString *title;

+ (id)alertWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_receiveResponse;
- (void)_sendCreate;
- (void)_sendDismiss;
- (id)actions;
- (void)activate;
- (void)addAction:(id)arg1;
- (id)alertController;
- (void)deactivate;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
- (bool)isActive;
- (id)message;
- (long long)preferredStyle;
- (void)setActions:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setPreferredStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
