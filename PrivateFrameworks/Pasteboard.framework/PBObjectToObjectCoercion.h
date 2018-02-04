/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBObjectToObjectCoercion : NSObject {
    NSMutableDictionary * _blockByClass;
    NSMutableOrderedSet * _classOrder;
    Class  _theClass;
}

@property (nonatomic, retain) NSMutableDictionary *blockByClass;
@property (nonatomic, retain) NSMutableOrderedSet *classOrder;
@property (nonatomic, retain) Class theClass;

- (void).cxx_destruct;
- (void)addCoercionToClass:(Class)arg1 block:(id /* block */)arg2;
- (id)availableClasses;
- (id)blockByClass;
- (bool)canCoerceToObjectOfClass:(Class)arg1;
- (id)classOrder;
- (id)coerceObject:(id)arg1 toObjectOfClass:(Class)arg2 outError:(id*)arg3;
- (id)initWithClass:(Class)arg1;
- (void)setBlockByClass:(id)arg1;
- (void)setClassOrder:(id)arg1;
- (void)setTheClass:(Class)arg1;
- (Class)theClass;

@end
