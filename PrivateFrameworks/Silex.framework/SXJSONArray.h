/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONArray : SXJSONObject <NSFastEnumeration> {
    unsigned long long  _count;
    NSArray * _json;
    id /* block */  _objectValueClassBlock;
    NSMutableArray * _objects;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSString * _specificationVersion;
    id /* block */  _valueClassBlock;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *json;
@property (nonatomic, readonly) id /* block */ objectValueClassBlock;
@property (nonatomic, readonly) NSMutableArray *objects;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, readonly) id /* block */ valueClassBlock;

- (void).cxx_destruct;
- (id)NSArray;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)firstObject;
- (id)initWithValueClassBlock:(id /* block */)arg1 objectValueClassBlock:(id /* block */)arg2 purgeBlock:(id /* block */)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5;
- (id)json;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id /* block */)objectValueClassBlock;
- (id)objects;
- (id)semaphore;
- (id)specificationVersion;
- (id /* block */)valueClassBlock;

@end
