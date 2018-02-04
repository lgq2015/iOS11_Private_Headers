/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVPropertyListEncoder : NSObject {
    NSData * _arrayClosingTagData;
    NSData * _arrayOpeningTagData;
    NSData * _boolFalseTagData;
    NSData * _boolTrueTagData;
    NSMutableArray * _containerStack;
    NSData * _dataClosingTagData;
    NSData * _dataOpeningTagData;
    NSDateFormatter * _dateFormatter;
    NSData * _dictionaryClosingTagData;
    NSData * _dictionaryOpeningTagData;
    NSData * _keyClosingTagData;
    NSData * _keyOpeningTagData;
    NSMutableData * _outputBuffer;
    NSFileHandle * _outputFileHandle;
    NSData * _stringClosingTagData;
    NSData * _stringOpeningTagData;
    NSMutableString * _tabPrefix;
    NSData * _tabPrefixData;
}

@property (nonatomic, readonly) NSData *arrayClosingTagData;
@property (nonatomic, readonly) NSData *arrayOpeningTagData;
@property (nonatomic, readonly) NSData *boolFalseTagData;
@property (nonatomic, readonly) NSData *boolTrueTagData;
@property (nonatomic, retain) NSMutableArray *containerStack;
@property (nonatomic, readonly) NSData *dataClosingTagData;
@property (nonatomic, readonly) NSData *dataOpeningTagData;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, readonly) NSData *dictionaryClosingTagData;
@property (nonatomic, readonly) NSData *dictionaryOpeningTagData;
@property (nonatomic, readonly) NSData *keyClosingTagData;
@property (nonatomic, readonly) NSData *keyOpeningTagData;
@property (nonatomic, retain) NSMutableData *outputBuffer;
@property (nonatomic, retain) NSFileHandle *outputFileHandle;
@property (nonatomic, readonly) NSData *stringClosingTagData;
@property (nonatomic, readonly) NSData *stringOpeningTagData;
@property (nonatomic, retain) NSMutableString *tabPrefix;
@property (nonatomic, retain) NSData *tabPrefixData;

- (void).cxx_destruct;
- (void)_addObject:(id)arg1;
- (void)_decrementTabPrefix;
- (void)_encodeData:(id)arg1;
- (void)_encodeDate:(id)arg1;
- (void)_encodeNumber:(id)arg1;
- (void)_encodeString:(id)arg1;
- (void)_flushOutputBuffer;
- (void)_incrementTabPrefix;
- (void)_startArray;
- (void)_startDictionary;
- (void)_writeData:(id)arg1;
- (void)_writeDictionaryKey:(id)arg1;
- (void)_writeString:(id)arg1;
- (void)addObject:(id)arg1;
- (id)arrayClosingTagData;
- (id)arrayOpeningTagData;
- (id)boolFalseTagData;
- (id)boolTrueTagData;
- (void)close;
- (id)containerStack;
- (id)dataClosingTagData;
- (id)dataOpeningTagData;
- (id)dateFormatter;
- (id)dictionaryClosingTagData;
- (id)dictionaryOpeningTagData;
- (void)endArray;
- (void)endDictionary;
- (id)init;
- (id)initWithOutputFileHandle:(id)arg1;
- (id)keyClosingTagData;
- (id)keyOpeningTagData;
- (id)outputBuffer;
- (id)outputFileHandle;
- (void)setContainerStack:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOutputBuffer:(id)arg1;
- (void)setOutputFileHandle:(id)arg1;
- (void)setTabPrefix:(id)arg1;
- (void)setTabPrefixData:(id)arg1;
- (void)startArray;
- (void)startArrayForKey:(id)arg1;
- (void)startDictionary;
- (void)startDictionaryForKey:(id)arg1;
- (id)stringClosingTagData;
- (id)stringOpeningTagData;
- (id)tabPrefix;
- (id)tabPrefixData;

@end
