/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter> {
    NSDateFormatter * _dateFormatter;
    bool  _includeEnvelopePartNames;
    bool  _includeFunction;
    bool  _includeLevel;
    bool  _includeLogName;
    bool  _includeMachPort;
    bool  _includeMessage;
    bool  _includeProcessID;
    bool  _includeProcessName;
    bool  _includeTimestamp;
    bool  _useCompactForm;
    bool  _usePrettyTimestamp;
    bool  _useTinyEnvelopePartNames;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeEnvelopePartNames;
@property (nonatomic) bool includeFunction;
@property (nonatomic) bool includeLevel;
@property (nonatomic) bool includeLogName;
@property (nonatomic) bool includeMachPort;
@property (nonatomic) bool includeMessage;
@property (nonatomic) bool includeProcessID;
@property (nonatomic) bool includeProcessName;
@property (nonatomic) bool includeTimestamp;
@property (readonly) Class superclass;
@property (nonatomic) bool useCompactForm;
@property (nonatomic) bool usePrettyTimestamp;
@property (nonatomic) bool useTinyEnvelopePartNames;

- (void).cxx_destruct;
- (id)dateFormatter;
- (bool)includeEnvelopePartNames;
- (bool)includeFunction;
- (bool)includeLevel;
- (bool)includeLogName;
- (bool)includeMachPort;
- (bool)includeMessage;
- (bool)includeProcessID;
- (bool)includeProcessName;
- (bool)includeTimestamp;
- (id)init;
- (id)newFormattedString:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setIncludeEnvelopePartNames:(bool)arg1;
- (void)setIncludeFunction:(bool)arg1;
- (void)setIncludeLevel:(bool)arg1;
- (void)setIncludeLogName:(bool)arg1;
- (void)setIncludeMachPort:(bool)arg1;
- (void)setIncludeMessage:(bool)arg1;
- (void)setIncludeProcessID:(bool)arg1;
- (void)setIncludeProcessName:(bool)arg1;
- (void)setIncludeTimestamp:(bool)arg1;
- (void)setUseCompactForm:(bool)arg1;
- (void)setUsePrettyTimestamp:(bool)arg1;
- (void)setUseTinyEnvelopePartNames:(bool)arg1;
- (bool)useCompactForm;
- (bool)usePrettyTimestamp;
- (bool)useTinyEnvelopePartNames;

@end
