/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARCommandTagger : NSObject {
    struct unique_ptr<quasar::CommandTagger, std::__1::default_delete<quasar::CommandTagger> > { 
        struct __compressed_pair<quasar::CommandTagger *, std::__1::default_delete<quasar::CommandTagger> > { 
            struct CommandTagger {} *__first_; 
        } __ptr_; 
    }  _tagger;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)commandPhraseTagForIndex:(long long)arg1;
- (id)commandTaggingFromRecognitionResult:(id)arg1 activeCommands:(id)arg2;
- (id)initWithConfiguration:(id)arg1 usage:(long long)arg2;
- (bool)isCommandPhraseTag:(id)arg1;
- (bool)isParameterTag:(id)arg1;
- (id)parameterTagForIndex:(long long)arg1;

@end
