/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MMCSRequestorContext : NSObject {
    char ** _authTokens;
    unsigned long long  _count;
    MMCSEngine * _engine;
    unsigned int * _itemFlags;
    unsigned long long * _itemIDs;
    char ** _signatures;
    int  _type;
}

@property (nonatomic) char **authTokens;
@property (nonatomic) unsigned long long count;
@property (nonatomic) MMCSEngine *engine;
@property (nonatomic) unsigned int*itemFlags;
@property (nonatomic) unsigned long long*itemIDs;
@property (nonatomic) char **signatures;
@property (nonatomic) int type;

+ (id)contextWithEngine:(id)arg1 type:(int)arg2;

- (void).cxx_destruct;
- (char **)authTokens;
- (unsigned long long)count;
- (void)dealloc;
- (id)engine;
- (id)initWithEngine:(id)arg1 type:(int)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned int*)itemFlags;
- (unsigned long long*)itemIDs;
- (void)setAuthTokens:(char **)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setEngine:(id)arg1;
- (void)setItemFlags:(unsigned int*)arg1;
- (void)setItemIDs:(unsigned long long*)arg1;
- (void)setSignatures:(char **)arg1;
- (void)setType:(int)arg1;
- (char **)signatures;
- (int)type;

@end
