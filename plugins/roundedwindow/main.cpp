#include "roundedwindow.h"
#include <KPluginFactory>

class RoundedWindowPluginFactory : public KWin::EffectPluginFactory
{
    Q_OBJECT
    Q_INTERFACES(KPluginFactory)
    Q_PLUGIN_METADATA(IID KPluginFactory_iid FILE "roundedwindow.json")

public:
    explicit RoundedWindowPluginFactory();
    ~RoundedWindowPluginFactory();

    KWin::Effect * createEffect() const override
    {
        return new RoundedWindow;
    }
};

K_PLUGIN_FACTORY_DEFINITION(RoundedWindowPluginFactory, registerPlugin<RoundedWindow>();)
K_EXPORT_PLUGIN_VERSION(KWIN_EFFECT_API_VERSION)

#include "main.moc"
