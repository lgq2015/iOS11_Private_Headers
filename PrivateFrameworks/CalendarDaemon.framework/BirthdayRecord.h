/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface BirthdayRecord : NSObject {
    bool  _isEmpty;
    NSMutableDictionary * _record;
}

@property (nonatomic, readonly) bool isEmpty;

- (void).cxx_destruct;
- (bool)doesPerson:(void*)arg1 haveBirthday:(id)arg2;
- (id)init;
- (bool)isEmpty;
- (void)recordBirthday:(id)arg1 forPerson:(void*)arg2;

@end
