/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCArgumentSubcommand : NSObject {
    NSMutableArray * _optionArray;
    NSString * _subcommandName;
}

+ (id)subcommandWithName:(id)arg1;

- (void).cxx_destruct;
- (void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(bool)arg6;
- (void)addOptions;
- (long long)compare:(id)arg1;
- (id)description;
- (id)formattedHelpFooter;
- (id)formattedHelpHeader;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)optionArray;
- (int)run;
- (void)showHelp;
- (void)stop;
- (void)stopDueToSigTerm;
- (id)subcommandName;

@end
