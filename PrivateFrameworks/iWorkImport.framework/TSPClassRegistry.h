/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPClassRegistry : NSObject {
    bool  _didFinishRegistration;
    NSMutableDictionary * _registry;
}

- (void).cxx_destruct;
- (Class)classForExtensionNumber:(int)arg1;
- (Class)classForMessage:(const struct Message { int (**x1)(); }*)arg1;
- (id)init;
- (void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2;

@end
