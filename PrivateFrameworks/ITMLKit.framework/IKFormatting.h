/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKFormatting : NSObject {
    NSMutableDictionary * _dateFormatters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dateFormattersLock;
    NSNumberFormatter * _durationFormatter;
    NSNumberFormatter * _durationPaddedFormatter;
    NSMutableDictionary * _numberFormatters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _numberFormattersLock;
}

+ (id)isoDateFormatter;
+ (id)rfc1123DateFormatter;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)formatDate:(id)arg1 format:(id)arg2;
- (id)formatDuration:(id)arg1;
- (id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4;
- (id)init;

@end
