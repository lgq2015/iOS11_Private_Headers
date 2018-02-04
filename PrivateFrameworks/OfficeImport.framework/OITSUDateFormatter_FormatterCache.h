/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateFormatter_FormatterCache : NSObject {
    NSMutableDictionary * _dateFormatterCache;
    NSLock * _dateFormatterCacheLock;
}

+ (id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3;

- (id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3;
- (void)dealloc;
- (id)init;

@end
