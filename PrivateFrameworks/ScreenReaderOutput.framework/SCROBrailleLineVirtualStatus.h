/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleLineVirtualStatus : NSObject {
    int  _alignment;
    char * _cells;
    NSData * _data;
    long long  _length;
}

@property (nonatomic) int alignment;
@property (nonatomic) char *cells;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) long long length;

- (void).cxx_destruct;
- (int)alignment;
- (char *)cells;
- (id)data;
- (void)dealloc;
- (long long)length;
- (void)setAlignment:(int)arg1;
- (void)setCells:(char *)arg1;
- (void)setData:(id)arg1;
- (void)setLength:(long long)arg1;

@end
