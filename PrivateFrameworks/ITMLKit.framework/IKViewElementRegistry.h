/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementRegistry : NSObject {
    NSMutableDictionary * _classMap;
    NSMutableDictionary * _dependentMap;
    NSMutableDictionary * _typeMap;
}

- (void).cxx_destruct;
- (Class)elementClassByTagName:(id)arg1;
- (unsigned long long)elementTypeByTagName:(id)arg1;
- (id)init;
- (bool)isDependentByTagName:(id)arg1;
- (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
- (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(bool)arg4;

@end
