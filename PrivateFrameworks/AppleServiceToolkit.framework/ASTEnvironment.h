/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTEnvironment : NSObject {
    unsigned long long  _environmentType;
}

@property (nonatomic) unsigned long long environmentType;

+ (id)currentEnvironment;
+ (id)environmentWithEnvironmentType:(unsigned long long)arg1;

- (id)_customServerEntryWithForcedUpdate:(bool)arg1;
- (id)_environmentServerString;
- (unsigned long long)_serverSelectionWithForcedUpdate:(bool)arg1;
- (id)_serverURLWithForcedUpdate:(bool)arg1;
- (unsigned long long)environmentType;
- (id)init;
- (id)initWithEnvironmentType:(unsigned long long)arg1;
- (unsigned long long)serverSelection;
- (id)serverURL;
- (void)setEnvironmentType:(unsigned long long)arg1;
- (void)sync;

@end