/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDExtension : NSObject {
    NSString * _identifier;
    NSString * _name;
}

@property (retain) NSString *identifier;
@property (retain) NSString *name;

+ (id)extensionWithDEExtension:(id)arg1;
+ (id)extensionWithDicionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)name;
- (id)serialize;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
