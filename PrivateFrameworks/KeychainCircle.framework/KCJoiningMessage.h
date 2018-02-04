/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

@interface KCJoiningMessage : NSObject {
    NSData * _der;
    NSData * _firstData;
    NSData * _secondData;
    int  _type;
}

@property (readonly) NSData *der;
@property (readonly) NSData *firstData;
@property (readonly) NSData *secondData;
@property (readonly) int type;

+ (id)encodeToDERType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4;
+ (unsigned long long)encodedSizeType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4;
+ (id)messageWithDER:(id)arg1 error:(id*)arg2;
+ (id)messageWithType:(int)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)messageWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)der;
- (id)firstData;
- (bool)inflatePartsOfEncoding:(id*)arg1;
- (id)initWithDER:(id)arg1 error:(id*)arg2;
- (id)initWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4;
- (id)secondData;
- (int)type;

@end
