/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKLogic : NSObject {
    void body;
    void negatedBody;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *identifier;

+ (id)ifExistsLink:(id)arg1 to:(id)arg2;
+ (id)ifNotExistsLink:(id)arg1 to:(id)arg2;

- (id /* block */).cxx_destruct;
- (id)and:(id)arg1;
- (id)andExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (id)andNotExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (long long)hash;
- (id)identifier;
- (id)init;

@end
