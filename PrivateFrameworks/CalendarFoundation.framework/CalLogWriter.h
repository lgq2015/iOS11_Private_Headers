/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogWriter : NSObject <CalLogWriter> {
    <CalLogFormatter> * _formatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CalLogFormatter> *formatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (bool)flush;
- (id)formatter;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)write:(id)arg1;

@end
