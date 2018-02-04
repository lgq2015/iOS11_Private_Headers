/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCharacterStyleValidateFontResult : NSObject {
    int  _bold;
    int  _italic;
    NSString * _mappedName;
    TSUWarning * _warning;
}

@property (nonatomic) int bold;
@property (nonatomic) int italic;
@property (nonatomic, retain) NSString *mappedName;
@property (nonatomic, retain) TSUWarning *warning;

- (void).cxx_destruct;
- (int)bold;
- (int)italic;
- (id)mappedName;
- (void)setBold:(int)arg1;
- (void)setItalic:(int)arg1;
- (void)setMappedName:(id)arg1;
- (void)setWarning:(id)arg1;
- (id)warning;

@end
