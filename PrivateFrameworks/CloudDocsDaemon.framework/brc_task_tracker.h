/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface brc_task_tracker : NSObject {
    bool  cancelled;
    NSObject<OS_dispatch_group> * group;
    char * label;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
