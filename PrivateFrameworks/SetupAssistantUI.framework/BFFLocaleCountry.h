/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFLocaleCountry : NSObject {
    NSString * _code;
    NSString * _name;
}

@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *name;

+ (id /* block */)comparatorForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)code;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setCode:(id)arg1;
- (void)setName:(id)arg1;

@end
