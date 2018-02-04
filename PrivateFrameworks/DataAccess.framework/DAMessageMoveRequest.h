/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMessageMoveRequest : NSObject {
    id  _context;
    NSString * _fromFolder;
    NSString * _message;
    NSString * _toFolder;
}

@property (nonatomic, retain) id context;
@property (nonatomic, copy) NSString *fromFolder;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *toFolder;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)fromFolder;
- (unsigned long long)hash;
- (id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)message;
- (void)setContext:(id)arg1;
- (void)setFromFolder:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setToFolder:(id)arg1;
- (id)toFolder;

@end
