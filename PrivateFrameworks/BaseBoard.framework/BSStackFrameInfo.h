/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSStackFrameInfo : NSObject {
    unsigned long long  _address;
    NSString * _className;
    NSString * _executablePath;
    NSString * _functionName;
    NSString * _realFunctionName;
}

@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly, retain) NSString *className;
@property (nonatomic, readonly, retain) NSString *executableName;
@property (nonatomic, readonly, retain) NSString *executablePath;
@property (nonatomic, readonly, retain) NSString *functionName;

- (unsigned long long)address;
- (id)className;
- (void)dealloc;
- (id)description;
- (id)executableName;
- (id)executablePath;
- (id)functionName;
- (id)initWithReturnAddress:(unsigned long long)arg1;

@end